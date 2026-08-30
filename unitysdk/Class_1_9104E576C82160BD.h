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

#define CLASS_1_9104E576C82160BD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D6DC410)
#define CLASS_1_9104E576C82160BD_METHOD_1_50A3DA301DDFD679_OFFSET UNITYSDK_OFFSET(0x1D6DBAF0)
#define CLASS_1_9104E576C82160BD_METHOD_1_51DEDFE03EF89606_OFFSET UNITYSDK_OFFSET(0x1D6DBE00)
#define CLASS_1_9104E576C82160BD_METHOD_1_6162B6FB81BB4E91_OFFSET UNITYSDK_OFFSET(0x1D6DBFF0)
#define CLASS_1_9104E576C82160BD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D6DC240)
#define CLASS_1_9104E576C82160BD_METHOD_1_91D22408D4E5B512_OFFSET UNITYSDK_OFFSET(0x1D6DBF70)
#define CLASS_1_9104E576C82160BD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D6DC2D0)
#define CLASS_1_9104E576C82160BD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D6DBDA0)
#define CLASS_1_9104E576C82160BD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D6DBB70)
#define CLASS_1_9104E576C82160BD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D6DC200)
#define CLASS_1_9104E576C82160BD_METHOD_1_F11BFD6688692AF7_OFFSET UNITYSDK_OFFSET(0x1D6DC460)
#define CLASS_1_9104E576C82160BD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D6DC370)
#define CLASS_1_9104E576C82160BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6DC830)

inline static constexpr unsigned int Class_1_9104E576C82160BD_TypeDefinitionIndex = 13471;

class Class_1_9104E576C82160BD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9104E576C82160BD_TypeDefinitionIndex)->GetStaticField(0x3FD20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9104E576C82160BD_TypeDefinitionIndex)->GetStaticField(0x3FD28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9104E576C82160BD_TypeDefinitionIndex)->GetStaticField(0x3FD30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9104E576C82160BD_TypeDefinitionIndex)->GetStaticField(0xFBC0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9104E576C82160BD_TypeDefinitionIndex)->GetStaticField(0xFBC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>* Method_1_50A3DA301DDFD679()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_50A3DA301DDFD679_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*> Method_1_51DEDFE03EF89606()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_51DEDFE03EF89606_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>, ::RPG::GameCore::GridFightSeasonExpScoreRow*> Method_1_91D22408D4E5B512()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>, ::RPG::GameCore::GridFightSeasonExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_91D22408D4E5B512_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonExpScoreRow* Method_1_6162B6FB81BB4E91(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightSeasonExpScoreRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_6162B6FB81BB4E91_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_F11BFD6688692AF7(::RPG::GameCore::GridFightSeasonExpScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonExpScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_9104E576C82160BD_METHOD_1_F11BFD6688692AF7_OFFSET))(a1);
	}
};
