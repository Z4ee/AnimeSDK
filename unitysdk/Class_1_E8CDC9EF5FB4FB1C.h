#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x182E59C0)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_1BBB2E6EF2651B4C_OFFSET UNITYSDK_OFFSET(0x182E5A10)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182E57E0)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_527C4C5D92B08BD0_OFFSET UNITYSDK_OFFSET(0x182E50F0)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_6B65F476A55588BB_OFFSET UNITYSDK_OFFSET(0x182E55D0)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182E5170)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182E5880)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182E53C0)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_DAC4D85075992365_OFFSET UNITYSDK_OFFSET(0x182E5420)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182E57A0)
#define CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182E5920)
#define CLASS_1_E8CDC9EF5FB4FB1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182E5D70)

inline static constexpr unsigned int Class_1_E8CDC9EF5FB4FB1C_TypeDefinitionIndex = 12700;

class Class_1_E8CDC9EF5FB4FB1C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8CDC9EF5FB4FB1C_TypeDefinitionIndex)->GetStaticField(0x23DC0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8CDC9EF5FB4FB1C_TypeDefinitionIndex)->GetStaticField(0x23DC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8CDC9EF5FB4FB1C_TypeDefinitionIndex)->GetStaticField(0x23DD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8CDC9EF5FB4FB1C_TypeDefinitionIndex)->GetStaticField(0x9410);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8CDC9EF5FB4FB1C_TypeDefinitionIndex)->GetStaticField(0x9411);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>* Method_1_527C4C5D92B08BD0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_527C4C5D92B08BD0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*> Method_1_DAC4D85075992365()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_DAC4D85075992365_OFFSET))();
	}

	static ::RPG::GameCore::GridFightOrbTypeRow* Method_1_6B65F476A55588BB(::RPG::GameCore::GridFightOrbType a1)
	{
		return ((::RPG::GameCore::GridFightOrbTypeRow*(*)(::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_6B65F476A55588BB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1BBB2E6EF2651B4C(::RPG::GameCore::GridFightOrbTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightOrbTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_E8CDC9EF5FB4FB1C_METHOD_1_1BBB2E6EF2651B4C_OFFSET))(a1);
	}
};
