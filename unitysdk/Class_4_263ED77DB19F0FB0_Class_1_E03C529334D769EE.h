#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_BE29B49AC03370B6;
class Class_4_263ED77DB19F0FB0_Class_1_FF25F965280355D1;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_4_263ED77DB19F0FB0_CLASS_1_E03C529334D769EE_METHOD_1_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x17843250)
#define CLASS_4_263ED77DB19F0FB0_CLASS_1_E03C529334D769EE_METHOD_1_AF393CB5CBA3D3C0_OFFSET UNITYSDK_OFFSET(0x17842D60)
#define CLASS_4_263ED77DB19F0FB0_CLASS_1_E03C529334D769EE__CTOR_OFFSET UNITYSDK_OFFSET(0x17842D50)

inline static constexpr unsigned int Class_4_263ED77DB19F0FB0_Class_1_E03C529334D769EE_TypeDefinitionIndex = 88403;

class Class_4_263ED77DB19F0FB0_Class_1_E03C529334D769EE : public ::System::Object
{
public:
	::Class_4_263ED77DB19F0FB0_Class_1_FF25F965280355D1* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_CLASS_1_E03C529334D769EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF393CB5CBA3D3C0(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_CLASS_1_E03C529334D769EE_METHOD_1_AF393CB5CBA3D3C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2943CB55423DBA35(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_CLASS_1_E03C529334D769EE_METHOD_1_2943CB55423DBA35_OFFSET))(this, a1);
	}
};
