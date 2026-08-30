#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9FD109015E89F682_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CD1B970)
#define CLASS_1_9FD109015E89F682_METHOD_1_3E1AB177B5E54570_OFFSET UNITYSDK_OFFSET(0x1CD1B150)
#define CLASS_1_9FD109015E89F682_METHOD_1_5ECB814CCAB3B4B2_OFFSET UNITYSDK_OFFSET(0x1CD1B9C0)
#define CLASS_1_9FD109015E89F682_METHOD_1_60671DAE4CA91BC7_OFFSET UNITYSDK_OFFSET(0x1CD1B5D0)
#define CLASS_1_9FD109015E89F682_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD1B7A0)
#define CLASS_1_9FD109015E89F682_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD1B830)
#define CLASS_1_9FD109015E89F682_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD1B400)
#define CLASS_1_9FD109015E89F682_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD1B1D0)
#define CLASS_1_9FD109015E89F682_METHOD_1_EE7D5C77DFC7A8B1_OFFSET UNITYSDK_OFFSET(0x1CD1B460)
#define CLASS_1_9FD109015E89F682_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD1B760)
#define CLASS_1_9FD109015E89F682_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD1B8D0)
#define CLASS_1_9FD109015E89F682__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD1BD30)

inline static constexpr unsigned int Class_1_9FD109015E89F682_TypeDefinitionIndex = 12023;

class Class_1_9FD109015E89F682 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD109015E89F682_TypeDefinitionIndex)->GetStaticField(0x44500);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD109015E89F682_TypeDefinitionIndex)->GetStaticField(0x44508);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD109015E89F682_TypeDefinitionIndex)->GetStaticField(0x44510);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD109015E89F682_TypeDefinitionIndex)->GetStaticField(0x10220);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FD109015E89F682_TypeDefinitionIndex)->GetStaticField(0x10221);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>* Method_1_3E1AB177B5E54570()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_3E1AB177B5E54570_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*> Method_1_EE7D5C77DFC7A8B1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityParkourAIConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_EE7D5C77DFC7A8B1_OFFSET))();
	}

	static ::RPG::GameCore::ActivityParkourAIConfigRow* Method_1_60671DAE4CA91BC7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityParkourAIConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_60671DAE4CA91BC7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5ECB814CCAB3B4B2(::RPG::GameCore::ActivityParkourAIConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityParkourAIConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9FD109015E89F682_METHOD_1_5ECB814CCAB3B4B2_OFFSET))(a1);
	}
};
