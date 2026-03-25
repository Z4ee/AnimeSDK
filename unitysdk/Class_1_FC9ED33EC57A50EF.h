#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyStaticConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16B6A040)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_0CEEE6B9AA45B304_OFFSET UNITYSDK_OFFSET(0x16B69AF0)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B69E60)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B69840)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_A270D680417711D7_OFFSET UNITYSDK_OFFSET(0x16B697C0)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_AC85ED46F09EF3FC_OFFSET UNITYSDK_OFFSET(0x16B6A090)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B69F00)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B69A90)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_DB4F77C807844488_OFFSET UNITYSDK_OFFSET(0x16B69CA0)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B69E20)
#define CLASS_1_FC9ED33EC57A50EF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B69FA0)
#define CLASS_1_FC9ED33EC57A50EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B6A3A0)

inline static constexpr unsigned int Class_1_FC9ED33EC57A50EF_TypeDefinitionIndex = 14076;

class Class_1_FC9ED33EC57A50EF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC9ED33EC57A50EF_TypeDefinitionIndex)->GetStaticField(0x2A730);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC9ED33EC57A50EF_TypeDefinitionIndex)->GetStaticField(0x2A738);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC9ED33EC57A50EF_TypeDefinitionIndex)->GetStaticField(0x2A740);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC9ED33EC57A50EF_TypeDefinitionIndex)->GetStaticField(0xDFB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC9ED33EC57A50EF_TypeDefinitionIndex)->GetStaticField(0xDFB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>* Method_1_A270D680417711D7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_A270D680417711D7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*> Method_1_0CEEE6B9AA45B304()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_0CEEE6B9AA45B304_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyStaticConfigRow* Method_1_DB4F77C807844488(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyStaticConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_DB4F77C807844488_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_AC85ED46F09EF3FC(::RPG::GameCore::TrainPartyStaticConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyStaticConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_FC9ED33EC57A50EF_METHOD_1_AC85ED46F09EF3FC_OFFSET))(a1);
	}
};
