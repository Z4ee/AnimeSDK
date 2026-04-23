#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0A05564B7F916C1.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_1_E4CB20B056222958;
class Class_2_8B82B82888342DD7;
class Class_3_301DB96170A54A53;
namespace ScenenLightManager { class BlockEnvExportData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_594F0E2A2DBF485F_METHOD_2_231A86DB4738C48B_1_OFFSET UNITYSDK_OFFSET(0x117EDCD0)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_231A86DB4738C48B_OFFSET UNITYSDK_OFFSET(0x117EDC80)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x117ED4A0)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_44EB66A858205A6F_OFFSET UNITYSDK_OFFSET(0x117ED820)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_72B39D120408D16D_OFFSET UNITYSDK_OFFSET(0x117ED280)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_8F477F1A789EB26D_OFFSET UNITYSDK_OFFSET(0x117EDD20)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_A58F1087C784F228_OFFSET UNITYSDK_OFFSET(0x117EE7D0)
#define CLASS_2_594F0E2A2DBF485F__CCTOR_OFFSET UNITYSDK_OFFSET(0x117EE650)
#define CLASS_2_594F0E2A2DBF485F__CTOR_OFFSET UNITYSDK_OFFSET(0x117EE480)
#define CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_0_OFFSET UNITYSDK_OFFSET(0x117EE690)
#define CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_1_OFFSET UNITYSDK_OFFSET(0x117EE6D0)

inline static constexpr unsigned int Class_2_594F0E2A2DBF485F_TypeDefinitionIndex = 46168;

class Class_2_594F0E2A2DBF485F : public ::Class_1_E0A05564B7F916C1
{
public:
	static ::System::String** StaticGet_Field_2_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_594F0E2A2DBF485F_TypeDefinitionIndex)->GetStaticField(0x22D50);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_5; // 0x60
	::Class_3_301DB96170A54A53* Field_2_2; // 0x68
	::System::String* Field_2_1; // 0x70
	::Class_2_8B82B82888342DD7* Field_2_7; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* Field_2_6; // 0x80
	::System::Int32 Field_2_3; // 0x88
	::RPG::CustomRP::CustomLightQualityFilter Field_2_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_72B39D120408D16D(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_72B39D120408D16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_44EB66A858205A6F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_44EB66A858205A6F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_231A86DB4738C48B(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_231A86DB4738C48B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_231A86DB4738C48B_1(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_231A86DB4738C48B_1_OFFSET))(a1, a2);
	}

	::System::Void Method_2_8F477F1A789EB26D(::ScenenLightManager::BlockEnvExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_8F477F1A789EB26D_OFFSET))(this, a1);
	}

	::System::Void _LoadBlock_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_0_OFFSET))(this);
	}

	::System::Void _LoadBlock_b__7_1(::UnityEngine::Object* obj)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_1_OFFSET))(this, obj);
	}

	::System::Void Method_2_A58F1087C784F228(::RPG::Client::OpenWorld::StreamingLightEnum P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_A58F1087C784F228_OFFSET))(this, P0);
	}
};
