#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4CC63B48A3AF9123_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18237000)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_1B9E365786118C89_OFFSET UNITYSDK_OFFSET(0x18236BD0)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_2CF62F2A863994A9_OFFSET UNITYSDK_OFFSET(0x18237050)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18236E20)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18236770)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_813F112FBB1FFF0F_OFFSET UNITYSDK_OFFSET(0x182366F0)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18236EC0)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182369C0)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18236DE0)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18236F60)
#define CLASS_1_4CC63B48A3AF9123_METHOD_1_FDC677B0D0DD3AD0_OFFSET UNITYSDK_OFFSET(0x18236A20)
#define CLASS_1_4CC63B48A3AF9123__CCTOR_OFFSET UNITYSDK_OFFSET(0x18237400)

inline static constexpr unsigned int Class_1_4CC63B48A3AF9123_TypeDefinitionIndex = 10585;

class Class_1_4CC63B48A3AF9123 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CC63B48A3AF9123_TypeDefinitionIndex)->GetStaticField(0x23600);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CC63B48A3AF9123_TypeDefinitionIndex)->GetStaticField(0x23608);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CC63B48A3AF9123_TypeDefinitionIndex)->GetStaticField(0x23610);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CC63B48A3AF9123_TypeDefinitionIndex)->GetStaticField(0x90A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CC63B48A3AF9123_TypeDefinitionIndex)->GetStaticField(0x90A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>* Method_1_813F112FBB1FFF0F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_813F112FBB1FFF0F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*> Method_1_FDC677B0D0DD3AD0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_FDC677B0D0DD3AD0_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingBuildingLevelRow* Method_1_1B9E365786118C89(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ChenLingBuildingLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_1B9E365786118C89_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2CF62F2A863994A9(::RPG::GameCore::ChenLingBuildingLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingBuildingLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_4CC63B48A3AF9123_METHOD_1_2CF62F2A863994A9_OFFSET))(a1);
	}
};
