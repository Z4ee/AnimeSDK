#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65F0290E6742FF82.h"
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

#define CLASS_2_594F0E2A2DBF485F_METHOD_2_231A86DB4738C48B_1_OFFSET UNITYSDK_OFFSET(0x1286D2D0)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_231A86DB4738C48B_OFFSET UNITYSDK_OFFSET(0x1286D280)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_44EB66A858205A6F_OFFSET UNITYSDK_OFFSET(0x1286CCD0)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_70E39C6CDE4464E4_OFFSET UNITYSDK_OFFSET(0x1286C700)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_CB98D57E67E60E78_OFFSET UNITYSDK_OFFSET(0x1286D320)
#define CLASS_2_594F0E2A2DBF485F_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1286C950)
#define CLASS_2_594F0E2A2DBF485F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1286DD20)
#define CLASS_2_594F0E2A2DBF485F__CTOR_OFFSET UNITYSDK_OFFSET(0x1286DB10)
#define CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_0_OFFSET UNITYSDK_OFFSET(0x1286DD40)
#define CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_1_OFFSET UNITYSDK_OFFSET(0x1286DD80)

inline static constexpr unsigned int Class_2_594F0E2A2DBF485F_TypeDefinitionIndex = 49997;

class Class_2_594F0E2A2DBF485F : public ::Class_1_65F0290E6742FF82
{
public:
	static ::System::String** StaticGet_ONHNCCGAIKH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_594F0E2A2DBF485F_TypeDefinitionIndex)->GetStaticField(0x3A1F0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* AJMBJKAJEFB; // 0x60
	::Class_2_8B82B82888342DD7* NIJEOJCIINK; // 0x68
	::System::String* PEFALGOFDIK; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::System::Collections::Generic::List_1<::System::Int32>*>* LPAJOEFJPJA; // 0x78
	::Class_3_301DB96170A54A53* HPAKKMNLCND; // 0x80
	::System::Int32 GCKDCLLBGEH; // 0x88
	::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_70E39C6CDE4464E4(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_70E39C6CDE4464E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
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

	::System::Void Method_2_CB98D57E67E60E78(::ScenenLightManager::BlockEnvExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F_METHOD_2_CB98D57E67E60E78_OFFSET))(this, a1);
	}

	::System::Void _LoadBlock_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_0_OFFSET))(this);
	}

	::System::Void _LoadBlock_b__7_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_594F0E2A2DBF485F__LOADBLOCK_B__7_1_OFFSET))(this, a1);
	}
};
