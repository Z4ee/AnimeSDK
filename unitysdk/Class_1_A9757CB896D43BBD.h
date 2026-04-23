#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A9757CB896D43BBD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18781290)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x187810B0)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_3486B2D0F9853D93_OFFSET UNITYSDK_OFFSET(0x18780D60)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_50A3DA301DDFD679_OFFSET UNITYSDK_OFFSET(0x18780880)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18780900)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18781150)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_B37A0ACE47A35368_OFFSET UNITYSDK_OFFSET(0x18780E20)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_CA0E50E2587FD18A_OFFSET UNITYSDK_OFFSET(0x18780BB0)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18780B50)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18781070)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_F11BFD6688692AF7_OFFSET UNITYSDK_OFFSET(0x187812E0)
#define CLASS_1_A9757CB896D43BBD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x187811F0)
#define CLASS_1_A9757CB896D43BBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x187816B0)

inline static constexpr unsigned int Class_1_A9757CB896D43BBD_TypeDefinitionIndex = 12847;

class Class_1_A9757CB896D43BBD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9757CB896D43BBD_TypeDefinitionIndex)->GetStaticField(0x1BBD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9757CB896D43BBD_TypeDefinitionIndex)->GetStaticField(0x1BBD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9757CB896D43BBD_TypeDefinitionIndex)->GetStaticField(0x1BBE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9757CB896D43BBD_TypeDefinitionIndex)->GetStaticField(0x7250);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9757CB896D43BBD_TypeDefinitionIndex)->GetStaticField(0x7251);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>* Method_1_50A3DA301DDFD679()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_50A3DA301DDFD679_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*> Method_1_CA0E50E2587FD18A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_CA0E50E2587FD18A_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>, ::RPG::GameCore::GridFightSeasonExpScoreRow*> Method_1_3486B2D0F9853D93()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>, ::RPG::GameCore::GridFightSeasonExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_3486B2D0F9853D93_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonExpScoreRow* Method_1_B37A0ACE47A35368(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightSeasonExpScoreRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_B37A0ACE47A35368_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_F11BFD6688692AF7(::RPG::GameCore::GridFightSeasonExpScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonExpScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_A9757CB896D43BBD_METHOD_1_F11BFD6688692AF7_OFFSET))(a1);
	}
};
