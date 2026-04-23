#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2TipsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1D5BDCEDD7362206_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18258730)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_28035335FE68FC42_OFFSET UNITYSDK_OFFSET(0x18258780)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18258550)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_3E4BE35639D2694B_OFFSET UNITYSDK_OFFSET(0x18258190)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_537B6EC1DAA635BC_OFFSET UNITYSDK_OFFSET(0x18258340)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_6A30A05C84F47D06_OFFSET UNITYSDK_OFFSET(0x18257E60)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18257EE0)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182585F0)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18258130)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18258510)
#define CLASS_1_1D5BDCEDD7362206_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18258690)
#define CLASS_1_1D5BDCEDD7362206__CCTOR_OFFSET UNITYSDK_OFFSET(0x18258AE0)

inline static constexpr unsigned int Class_1_1D5BDCEDD7362206_TypeDefinitionIndex = 11380;

class Class_1_1D5BDCEDD7362206 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D5BDCEDD7362206_TypeDefinitionIndex)->GetStaticField(0x1B2F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D5BDCEDD7362206_TypeDefinitionIndex)->GetStaticField(0x1B2F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D5BDCEDD7362206_TypeDefinitionIndex)->GetStaticField(0x1B300);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D5BDCEDD7362206_TypeDefinitionIndex)->GetStaticField(0x70B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D5BDCEDD7362206_TypeDefinitionIndex)->GetStaticField(0x70B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>* Method_1_6A30A05C84F47D06()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_6A30A05C84F47D06_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*> Method_1_3E4BE35639D2694B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2TipsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_3E4BE35639D2694B_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2TipsRow* Method_1_537B6EC1DAA635BC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2TipsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_537B6EC1DAA635BC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_28035335FE68FC42(::RPG::GameCore::MatchThreeV2TipsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2TipsRow*))((::PBYTE)hIl2Cpp + CLASS_1_1D5BDCEDD7362206_METHOD_1_28035335FE68FC42_OFFSET))(a1);
	}
};
