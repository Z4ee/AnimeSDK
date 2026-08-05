#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC_2.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_2.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_3_34849C4AB5143A64;

#define CLASS_1_2F6963EAE8391DB9_METHOD_1_1249B98663600980_OFFSET UNITYSDK_OFFSET(0x178BA460)
#define CLASS_1_2F6963EAE8391DB9_METHOD_1_2231D56721329D12_OFFSET UNITYSDK_OFFSET(0x178BA1A0)
#define CLASS_1_2F6963EAE8391DB9_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x178BA840)
#define CLASS_1_2F6963EAE8391DB9_METHOD_1_B5B34D9A2F211E59_OFFSET UNITYSDK_OFFSET(0x178BA740)
#define CLASS_1_2F6963EAE8391DB9_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x178BA900)

inline static constexpr unsigned int Class_1_2F6963EAE8391DB9_TypeDefinitionIndex = 66065;

class Class_1_2F6963EAE8391DB9 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FTransform3D Method_1_2231D56721329D12(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F6963EAE8391DB9_METHOD_1_2231D56721329D12_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FTransform3D Method_1_1249B98663600980(::UnityEngine::Camera* a1, ::System::Boolean a2)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F6963EAE8391DB9_METHOD_1_1249B98663600980_OFFSET))(a1, a2);
	}

	static ::Class_3_34849C4AB5143A64<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>* Method_1_B5B34D9A2F211E59()
	{
		return ((::Class_3_34849C4AB5143A64<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F6963EAE8391DB9_METHOD_1_B5B34D9A2F211E59_OFFSET))();
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F6963EAE8391DB9_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F6963EAE8391DB9_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}
};
