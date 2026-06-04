#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7DAF9E42659FA720_METHOD_1_076ECFCBB5A48D29_OFFSET UNITYSDK_OFFSET(0x19D74520)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19D748C0)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_0E2D8BEB33853A84_OFFSET UNITYSDK_OFFSET(0x19D740A0)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_697D1B80DB160075_OFFSET UNITYSDK_OFFSET(0x19D743B0)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19D746F0)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19D74780)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19D74350)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_DBAEAE1EC3C778F8_OFFSET UNITYSDK_OFFSET(0x19D74910)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19D74120)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19D746B0)
#define CLASS_1_7DAF9E42659FA720_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19D74820)
#define CLASS_1_7DAF9E42659FA720__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D74C80)

inline static constexpr unsigned int Class_1_7DAF9E42659FA720_TypeDefinitionIndex = 12767;

class Class_1_7DAF9E42659FA720 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAF9E42659FA720_TypeDefinitionIndex)->GetStaticField(0x4C480);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAF9E42659FA720_TypeDefinitionIndex)->GetStaticField(0x4C488);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAF9E42659FA720_TypeDefinitionIndex)->GetStaticField(0x4C490);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAF9E42659FA720_TypeDefinitionIndex)->GetStaticField(0xE870);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAF9E42659FA720_TypeDefinitionIndex)->GetStaticField(0xE871);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>* Method_1_0E2D8BEB33853A84()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_0E2D8BEB33853A84_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*> Method_1_697D1B80DB160075()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_697D1B80DB160075_OFFSET))();
	}

	static ::RPG::GameCore::GridFightAugmentConfigRow* Method_1_076ECFCBB5A48D29(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightAugmentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_076ECFCBB5A48D29_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_DBAEAE1EC3C778F8(::RPG::GameCore::GridFightAugmentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightAugmentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DAF9E42659FA720_METHOD_1_DBAEAE1EC3C778F8_OFFSET))(a1);
	}
};
