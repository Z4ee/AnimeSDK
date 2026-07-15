#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CDAD1C4D78702C93;
class Class_1_E990AB1287569416;
namespace RPG::Client { class PipelineCameraEngine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F1D8C3500555B80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160FAD20)
#define CLASS_1_6F1D8C3500555B80_METHOD_1_073E8252A2BD3C3E_OFFSET UNITYSDK_OFFSET(0x160FAE20)
#define CLASS_1_6F1D8C3500555B80_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x160FB1E0)
#define CLASS_1_6F1D8C3500555B80_METHOD_1_58382DF702948524_OFFSET UNITYSDK_OFFSET(0x160FABA0)
#define CLASS_1_6F1D8C3500555B80_METHOD_1_9256BEBF50440FAD_OFFSET UNITYSDK_OFFSET(0x160FAAF0)
#define CLASS_1_6F1D8C3500555B80_METHOD_1_A63A0E2672980FD1_OFFSET UNITYSDK_OFFSET(0x160FB110)
#define CLASS_1_6F1D8C3500555B80_METHOD_1_E2A42903C96F23E8_OFFSET UNITYSDK_OFFSET(0x160FAFE0)
#define CLASS_1_6F1D8C3500555B80__CTOR_OFFSET UNITYSDK_OFFSET(0x160FB300)

inline static constexpr unsigned int Class_1_6F1D8C3500555B80_TypeDefinitionIndex = 66531;

class Class_1_6F1D8C3500555B80 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	::System::Collections::Generic::List_1<::Class_1_E990AB1287569416*>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80__CTOR_OFFSET))(this);
	}

	::Class_1_E990AB1287569416* Method_1_9256BEBF50440FAD(::RPG::Client::PipelineCameraEngine* a1, ::Class_1_CDAD1C4D78702C93* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::Class_1_E990AB1287569416*(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::Class_1_CDAD1C4D78702C93*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_METHOD_1_9256BEBF50440FAD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_073E8252A2BD3C3E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_METHOD_1_073E8252A2BD3C3E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E2A42903C96F23E8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_METHOD_1_E2A42903C96F23E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A63A0E2672980FD1(::RPG::Client::PipelineCameraEngine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_METHOD_1_A63A0E2672980FD1_OFFSET))(this, a1);
	}

	::Class_1_E990AB1287569416* Method_1_58382DF702948524()
	{
		return ((::Class_1_E990AB1287569416*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_METHOD_1_58382DF702948524_OFFSET))(this);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1D8C3500555B80_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}
};
