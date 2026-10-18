#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_661;
class Class_1_C8BE4F61EF271729_Class_1_8C333BC50B0013E4;
namespace RPG::GameCore { class TargetOperationConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8BE4F61EF271729_METHOD_1_32DDD057404B39CE_OFFSET UNITYSDK_OFFSET(0xC31E900)
#define CLASS_1_C8BE4F61EF271729_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC31E840)
#define CLASS_1_C8BE4F61EF271729_METHOD_1_4B8D277CBB9E70E0_OFFSET UNITYSDK_OFFSET(0xC31E510)
#define CLASS_1_C8BE4F61EF271729_METHOD_1_9650E0AAC1463471_OFFSET UNITYSDK_OFFSET(0xC31DF60)
#define CLASS_1_C8BE4F61EF271729_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0xC31EF80)
#define CLASS_1_C8BE4F61EF271729_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xC31DB40)
#define CLASS_1_C8BE4F61EF271729__CCTOR_OFFSET UNITYSDK_OFFSET(0xC31F000)

inline static constexpr unsigned int Class_1_C8BE4F61EF271729_TypeDefinitionIndex = 56532;

class Class_1_C8BE4F61EF271729 : public ::System::Object
{
public:
	static ::RPG::GameCore::TargetOperationConfigList** StaticGet_KMNIGKAGPAH()
	{
		return (::RPG::GameCore::TargetOperationConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8BE4F61EF271729_TypeDefinitionIndex)->GetStaticField(0x6FEB0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C8BE4F61EF271729_Class_1_8C333BC50B0013E4*>** StaticGet_IAOICKALEHJ()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C8BE4F61EF271729_Class_1_8C333BC50B0013E4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8BE4F61EF271729_TypeDefinitionIndex)->GetStaticField(0x6FEB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_661*>** StaticGet_BLLHKPLCIPL()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_661*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8BE4F61EF271729_TypeDefinitionIndex)->GetStaticField(0x6FEC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729_METHOD_1_D9EF75A2D048B8A1_OFFSET))();
	}

	static ::System::Void Method_1_9650E0AAC1463471(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729_METHOD_1_9650E0AAC1463471_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B8D277CBB9E70E0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729_METHOD_1_4B8D277CBB9E70E0_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_661* Method_1_32DDD057404B39CE(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Class_0_16E4307DCC419505_661*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729_METHOD_1_32DDD057404B39CE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};
