#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_305;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FB05E0)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_576EC3A3DFB19F86_OFFSET UNITYSDK_OFFSET(0x19FB0A20)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_A190698E2DD03E79_OFFSET UNITYSDK_OFFSET(0x19FB0570)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4__ASYNCLOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0x19FB0B00)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB0560)

inline static constexpr unsigned int Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4_Class_1_BCA85D0C1E2BA6F4_TypeDefinitionIndex = 60721;

class Class_2_9D7D5D9CE0D0D8A4_Class_1_DFFEC5A7684A36E4_Class_1_BCA85D0C1E2BA6F4 : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshSurface* LIEBNDMOPHJ; // 0x10
	::UnityEngine::AI::NavMeshData* LPNENPCNIHK; // 0x18
	::RPG::Client::IAssetOperation* EGGKEMOBIFG; // 0x20
	::System::String* HJGPOFGOHHB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A190698E2DD03E79(::System::String* a1, ::UnityEngine::AI::NavMeshSurface* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AI::NavMeshSurface*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_A190698E2DD03E79_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* Method_1_576EC3A3DFB19F86()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4_METHOD_1_576EC3A3DFB19F86_OFFSET))(this);
	}

	::System::Boolean _AsyncLoad_b__2_0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_DFFEC5A7684A36E4_CLASS_1_BCA85D0C1E2BA6F4__ASYNCLOAD_B__2_0_OFFSET))(this, a1);
	}
};
