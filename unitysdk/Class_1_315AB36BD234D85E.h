#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightCyreneModifyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_315AB36BD234D85E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1939B280)
#define CLASS_1_315AB36BD234D85E_METHOD_1_188676DC9E9CF780_OFFSET UNITYSDK_OFFSET(0x1939ACF0)
#define CLASS_1_315AB36BD234D85E_METHOD_1_450CD5DEA3E0B4A9_OFFSET UNITYSDK_OFFSET(0x1939B2D0)
#define CLASS_1_315AB36BD234D85E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1939B0B0)
#define CLASS_1_315AB36BD234D85E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1939B140)
#define CLASS_1_315AB36BD234D85E_METHOD_1_BBCFFEA3D96D2D8E_OFFSET UNITYSDK_OFFSET(0x1939AE60)
#define CLASS_1_315AB36BD234D85E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1939AC90)
#define CLASS_1_315AB36BD234D85E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1939AA60)
#define CLASS_1_315AB36BD234D85E_METHOD_1_EFE91A816D6E861B_OFFSET UNITYSDK_OFFSET(0x1939A9E0)
#define CLASS_1_315AB36BD234D85E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1939B070)
#define CLASS_1_315AB36BD234D85E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1939B1E0)
#define CLASS_1_315AB36BD234D85E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1939B6A0)

inline static constexpr unsigned int Class_1_315AB36BD234D85E_TypeDefinitionIndex = 12909;

class Class_1_315AB36BD234D85E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_315AB36BD234D85E_TypeDefinitionIndex)->GetStaticField(0x582B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_315AB36BD234D85E_TypeDefinitionIndex)->GetStaticField(0x582B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_315AB36BD234D85E_TypeDefinitionIndex)->GetStaticField(0x582C0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_315AB36BD234D85E_TypeDefinitionIndex)->GetStaticField(0x116E0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_315AB36BD234D85E_TypeDefinitionIndex)->GetStaticField(0x116E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>* Method_1_EFE91A816D6E861B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_EFE91A816D6E861B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*> Method_1_188676DC9E9CF780()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_188676DC9E9CF780_OFFSET))();
	}

	static ::RPG::GameCore::GridFightCyreneModifyConfigRow* Method_1_BBCFFEA3D96D2D8E(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightSkillType a3)
	{
		return ((::RPG::GameCore::GridFightCyreneModifyConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_BBCFFEA3D96D2D8E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_450CD5DEA3E0B4A9(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_315AB36BD234D85E_METHOD_1_450CD5DEA3E0B4A9_OFFSET))(a1);
	}
};
