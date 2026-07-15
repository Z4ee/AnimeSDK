#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DD5B766696ADA790_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AFA1490)
#define CLASS_1_DD5B766696ADA790_METHOD_1_4D41031AFAA0B711_OFFSET UNITYSDK_OFFSET(0x1AFA0F40)
#define CLASS_1_DD5B766696ADA790_METHOD_1_6D454F77C898080C_OFFSET UNITYSDK_OFFSET(0x1AFA0C30)
#define CLASS_1_DD5B766696ADA790_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AFA12C0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_8BAE24B8BD7F85D8_OFFSET UNITYSDK_OFFSET(0x1AFA14E0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_8FFC0C0658FC4D85_OFFSET UNITYSDK_OFFSET(0x1AFA10B0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AFA1350)
#define CLASS_1_DD5B766696ADA790_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AFA0EE0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AFA0CB0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AFA1280)
#define CLASS_1_DD5B766696ADA790_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AFA13F0)
#define CLASS_1_DD5B766696ADA790__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFA1880)

inline static constexpr unsigned int Class_1_DD5B766696ADA790_TypeDefinitionIndex = 13302;

class Class_1_DD5B766696ADA790 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x675C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x675C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x675D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x13FF0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x13FF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>* Method_1_6D454F77C898080C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_6D454F77C898080C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*> Method_1_4D41031AFAA0B711()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_4D41031AFAA0B711_OFFSET))();
	}

	static ::RPG::GameCore::ILHardLevelGroupConfigRow* Method_1_8FFC0C0658FC4D85(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ILHardLevelGroupConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_8FFC0C0658FC4D85_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8BAE24B8BD7F85D8(::RPG::GameCore::ILHardLevelGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILHardLevelGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_8BAE24B8BD7F85D8_OFFSET))(a1);
	}
};
