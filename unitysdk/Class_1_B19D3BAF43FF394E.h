#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingStoryLineBonusRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B19D3BAF43FF394E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18467510)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18467330)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_4421EA176C58B673_OFFSET UNITYSDK_OFFSET(0x18467560)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_6941D77116B5FD24_OFFSET UNITYSDK_OFFSET(0x18466FA0)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18466CF0)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x184673D0)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18466F40)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_D4FC3C9E2701E846_OFFSET UNITYSDK_OFFSET(0x18466C70)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_DAB6FBCF04950404_OFFSET UNITYSDK_OFFSET(0x18467120)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x184672F0)
#define CLASS_1_B19D3BAF43FF394E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18467470)
#define CLASS_1_B19D3BAF43FF394E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18467870)

inline static constexpr unsigned int Class_1_B19D3BAF43FF394E_TypeDefinitionIndex = 11785;

class Class_1_B19D3BAF43FF394E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19D3BAF43FF394E_TypeDefinitionIndex)->GetStaticField(0x2EB30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19D3BAF43FF394E_TypeDefinitionIndex)->GetStaticField(0x2EB38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19D3BAF43FF394E_TypeDefinitionIndex)->GetStaticField(0x2EB40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19D3BAF43FF394E_TypeDefinitionIndex)->GetStaticField(0xB980);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B19D3BAF43FF394E_TypeDefinitionIndex)->GetStaticField(0xB981);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>* Method_1_D4FC3C9E2701E846()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_D4FC3C9E2701E846_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*> Method_1_6941D77116B5FD24()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_6941D77116B5FD24_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingStoryLineBonusRow* Method_1_DAB6FBCF04950404(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingStoryLineBonusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_DAB6FBCF04950404_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4421EA176C58B673(::RPG::GameCore::SwordTrainingStoryLineBonusRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStoryLineBonusRow*))((::PBYTE)hIl2Cpp + CLASS_1_B19D3BAF43FF394E_METHOD_1_4421EA176C58B673_OFFSET))(a1);
	}
};
