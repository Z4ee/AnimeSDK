#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace ScenenLightManager { class BlockEnvExportData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116E2730)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x116DFA80)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_5C00367CEE393898_OFFSET UNITYSDK_OFFSET(0x116E47F0)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_79B90490025ABC83_OFFSET UNITYSDK_OFFSET(0x116DF8C0)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x116E48B0)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x116E48C0)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_F0CD09CD3CC95235_OFFSET UNITYSDK_OFFSET(0x116E0890)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_F8EA4E92897AF9A6_OFFSET UNITYSDK_OFFSET(0x116E4790)
#define CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE__CTOR_OFFSET UNITYSDK_OFFSET(0x116DFCD0)

inline static constexpr unsigned int Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE_TypeDefinitionIndex = 39869;

class Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ScenenLightManager::BaseSceneLightExportData*>* Field_1_2; // 0x10
	::ScenenLightManager::BlockEnvExportData* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor(::ScenenLightManager::BlockEnvExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8EA4E92897AF9A6(::ScenenLightManager::BlockEnvExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_F8EA4E92897AF9A6_OFFSET))(this, a1);
	}

	::ScenenLightManager::BaseSceneLightExportData* Method_1_F0CD09CD3CC95235(::System::Int32 a1)
	{
		return ((::ScenenLightManager::BaseSceneLightExportData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_F0CD09CD3CC95235_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_79B90490025ABC83(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_79B90490025ABC83_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Double Method_1_5C00367CEE393898()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_5C00367CEE393898_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_1_2A2756596B5B28CE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
