#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_495;
class Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4;
namespace RPG::GameCore { class TargetOperationConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_37399E0EB1AF196F_METHOD_1_0C4F9FE3C7286E10_OFFSET UNITYSDK_OFFSET(0x11E17830)
#define CLASS_1_37399E0EB1AF196F_METHOD_1_130EDDC4AA73B159_OFFSET UNITYSDK_OFFSET(0x11E17BE0)
#define CLASS_1_37399E0EB1AF196F_METHOD_1_8C4DBAB81DA32AEC_OFFSET UNITYSDK_OFFSET(0x11E172B0)
#define CLASS_1_37399E0EB1AF196F_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x11E16E50)
#define CLASS_1_37399E0EB1AF196F_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x11E182F0)
#define CLASS_1_37399E0EB1AF196F_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11E17B00)
#define CLASS_1_37399E0EB1AF196F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E18370)

inline static constexpr unsigned int Class_1_37399E0EB1AF196F_TypeDefinitionIndex = 52107;

class Class_1_37399E0EB1AF196F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37399E0EB1AF196F_TypeDefinitionIndex)->GetStaticField(0x4FF80);
	}
	static ::RPG::GameCore::TargetOperationConfigList** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::TargetOperationConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37399E0EB1AF196F_TypeDefinitionIndex)->GetStaticField(0x4FF88);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_495*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_495*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37399E0EB1AF196F_TypeDefinitionIndex)->GetStaticField(0x4FF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_METHOD_1_96189EDEF38976A6_OFFSET))();
	}

	static ::System::Void Method_1_8C4DBAB81DA32AEC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_METHOD_1_8C4DBAB81DA32AEC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C4F9FE3C7286E10(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_METHOD_1_0C4F9FE3C7286E10_OFFSET))(a1);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_495* Method_1_130EDDC4AA73B159(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Class_0_16E4307DCC419505_495*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_METHOD_1_130EDDC4AA73B159_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};
