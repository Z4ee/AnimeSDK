#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_298;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B3BF80)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x18B3C550)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_A190698E2DD03E79_OFFSET UNITYSDK_OFFSET(0x18B3BF10)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4__ASYNCLOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0x18B3C650)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3BF00)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE_Class_1_BCA85D0C1E2BA6F4_TypeDefinitionIndex = 57900;

class Class_2_127F2B7B6F67B1A0_Class_1_CCBF5847755A65FE_Class_1_BCA85D0C1E2BA6F4 : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshSurface* Field_1_0; // 0x10
	::RPG::Client::IAssetOperation* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::UnityEngine::AI::NavMeshData* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A190698E2DD03E79(::System::String* a1, ::UnityEngine::AI::NavMeshSurface* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AI::NavMeshSurface*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_A190698E2DD03E79_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Boolean _AsyncLoad_b__2_0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_CCBF5847755A65FE_CLASS_1_BCA85D0C1E2BA6F4__ASYNCLOAD_B__2_0_OFFSET))(this, a1);
	}
};
