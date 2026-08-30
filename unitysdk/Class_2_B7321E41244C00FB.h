#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_B7321E41244C00FB_METHOD_2_3EB3238822BDBC3F_OFFSET UNITYSDK_OFFSET(0xB410F70)
#define CLASS_2_B7321E41244C00FB_METHOD_2_4D38898116B75561_OFFSET UNITYSDK_OFFSET(0xB410940)
#define CLASS_2_B7321E41244C00FB_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xB40F170)
#define CLASS_2_B7321E41244C00FB_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xB411270)
#define CLASS_2_B7321E41244C00FB_METHOD_2_92787DFA79753DD3_OFFSET UNITYSDK_OFFSET(0xB410FE0)
#define CLASS_2_B7321E41244C00FB_METHOD_2_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xB40F120)
#define CLASS_2_B7321E41244C00FB_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB40F0B0)
#define CLASS_2_B7321E41244C00FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB412010)

inline static constexpr unsigned int Class_2_B7321E41244C00FB_TypeDefinitionIndex = 70328;

class Class_2_B7321E41244C00FB : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* NFDNHHCPIIP; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* AKCGNNJGNIK; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* CHALKDPBNEI; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* DEOMNJNDJLP; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* CLFBLGMACMD; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* IEBGAAIPHAP; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* DDJOKDICMKC; // 0x48
	::UnityEngine::Vector3 MJGJPNOJOIE; // 0x50
	::UnityEngine::Matrix4x4 ODAIKOIHAOJ; // 0x5C
	::UnityEngine::Matrix4x4 IIAKKCAMKFF; // 0x9C
	::System::Boolean EMDEMKFCLFN; // 0xDC
	::System::Boolean OEMHEMIBLMD; // 0xDD
	::System::Boolean LLKJJPPKINN; // 0xDE
	::UnityEngine::Quaternion OENIINAJBBA; // 0xE0
	::System::Single DIBJOLBHNGE; // 0xF0
	::UnityEngine::Matrix4x4 BOCKFDFNLHJ; // 0xF4
	::UnityEngine::Vector2Int AOGBCDADOLP; // 0x134
	::System::Single KPHKIJJFPLK; // 0x13C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_4D38898116B75561()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_4D38898116B75561_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_2_92787DFA79753DD3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_92787DFA79753DD3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Effect_GPUCrowdAnimation* Method_2_3EB3238822BDBC3F()
	{
		return ((::RPG::Client::Effect_GPUCrowdAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_3EB3238822BDBC3F_OFFSET))(this);
	}
};
