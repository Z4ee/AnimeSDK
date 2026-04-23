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

#define CLASS_1_E91C0B493A0B943D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1906CE90)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x190212E0)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_450CD5DEA3E0B4A9_OFFSET UNITYSDK_OFFSET(0x1906CEE0)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_64B4847C6C0F5517_OFFSET UNITYSDK_OFFSET(0x1906CAC0)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FD7C40)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_868EDA096DDC8E24_OFFSET UNITYSDK_OFFSET(0x1906C910)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1906CD50)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1906C8B0)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_EFE91A816D6E861B_OFFSET UNITYSDK_OFFSET(0x1906C830)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1906CD10)
#define CLASS_1_E91C0B493A0B943D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1906CDF0)
#define CLASS_1_E91C0B493A0B943D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1906D2B0)

inline static constexpr unsigned int Class_1_E91C0B493A0B943D_TypeDefinitionIndex = 12823;

class Class_1_E91C0B493A0B943D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E91C0B493A0B943D_TypeDefinitionIndex)->GetStaticField(0x3E080);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E91C0B493A0B943D_TypeDefinitionIndex)->GetStaticField(0x3E088);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E91C0B493A0B943D_TypeDefinitionIndex)->GetStaticField(0x3E090);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E91C0B493A0B943D_TypeDefinitionIndex)->GetStaticField(0xDD70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E91C0B493A0B943D_TypeDefinitionIndex)->GetStaticField(0xDD71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>* Method_1_EFE91A816D6E861B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_EFE91A816D6E861B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*> Method_1_868EDA096DDC8E24()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_868EDA096DDC8E24_OFFSET))();
	}

	static ::RPG::GameCore::GridFightCyreneModifyConfigRow* Method_1_64B4847C6C0F5517(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightSkillType a3)
	{
		return ((::RPG::GameCore::GridFightCyreneModifyConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_64B4847C6C0F5517_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_450CD5DEA3E0B4A9(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E91C0B493A0B943D_METHOD_1_450CD5DEA3E0B4A9_OFFSET))(a1);
	}
};
