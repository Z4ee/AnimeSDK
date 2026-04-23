#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2PVPRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0D92D313B402B29E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18267D40)
#define CLASS_1_0D92D313B402B29E_METHOD_1_292501D3092917DD_OFFSET UNITYSDK_OFFSET(0x182679A0)
#define CLASS_1_0D92D313B402B29E_METHOD_1_2AFD5BCBFD073F53_OFFSET UNITYSDK_OFFSET(0x18267D90)
#define CLASS_1_0D92D313B402B29E_METHOD_1_2E0540827E3D2BB4_OFFSET UNITYSDK_OFFSET(0x18267820)
#define CLASS_1_0D92D313B402B29E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18267B60)
#define CLASS_1_0D92D313B402B29E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18267570)
#define CLASS_1_0D92D313B402B29E_METHOD_1_87BE07708DEE721E_OFFSET UNITYSDK_OFFSET(0x182674F0)
#define CLASS_1_0D92D313B402B29E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18267C00)
#define CLASS_1_0D92D313B402B29E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182677C0)
#define CLASS_1_0D92D313B402B29E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18267B20)
#define CLASS_1_0D92D313B402B29E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18267CA0)
#define CLASS_1_0D92D313B402B29E__CCTOR_OFFSET UNITYSDK_OFFSET(0x182680A0)

inline static constexpr unsigned int Class_1_0D92D313B402B29E_TypeDefinitionIndex = 11393;

class Class_1_0D92D313B402B29E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D92D313B402B29E_TypeDefinitionIndex)->GetStaticField(0x1BE10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D92D313B402B29E_TypeDefinitionIndex)->GetStaticField(0x1BE18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D92D313B402B29E_TypeDefinitionIndex)->GetStaticField(0x1BE20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D92D313B402B29E_TypeDefinitionIndex)->GetStaticField(0x7300);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D92D313B402B29E_TypeDefinitionIndex)->GetStaticField(0x7301);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>* Method_1_87BE07708DEE721E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_87BE07708DEE721E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*> Method_1_2E0540827E3D2BB4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPRankRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_2E0540827E3D2BB4_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2PVPRankRow* Method_1_292501D3092917DD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2PVPRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_292501D3092917DD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2AFD5BCBFD073F53(::RPG::GameCore::MatchThreeV2PVPRankRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2PVPRankRow*))((::PBYTE)hIl2Cpp + CLASS_1_0D92D313B402B29E_METHOD_1_2AFD5BCBFD073F53_OFFSET))(a1);
	}
};
