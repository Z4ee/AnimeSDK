#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CDAD1C4D78702C93;
class Class_1_E990AB1287569416;
namespace RPG::Client { class PipelineCameraEngine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7C0A6A60765B387C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F64880)
#define CLASS_1_7C0A6A60765B387C_METHOD_1_04F4C631209B725F_OFFSET UNITYSDK_OFFSET(0x8F64B40)
#define CLASS_1_7C0A6A60765B387C_METHOD_1_21F3349673FA5F72_OFFSET UNITYSDK_OFFSET(0x8F64960)
#define CLASS_1_7C0A6A60765B387C_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x8F64D40)
#define CLASS_1_7C0A6A60765B387C_METHOD_1_9256BEBF50440FAD_OFFSET UNITYSDK_OFFSET(0x8F646D0)
#define CLASS_1_7C0A6A60765B387C_METHOD_1_D7862DDFEBFBA0AF_OFFSET UNITYSDK_OFFSET(0x8F64780)
#define CLASS_1_7C0A6A60765B387C_METHOD_1_DFCA5A46486740D7_OFFSET UNITYSDK_OFFSET(0x8F64C70)
#define CLASS_1_7C0A6A60765B387C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F64E90)

inline static constexpr unsigned int Class_1_7C0A6A60765B387C_TypeDefinitionIndex = 64205;

class Class_1_7C0A6A60765B387C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	::System::Collections::Generic::List_1<::Class_1_E990AB1287569416*>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C__CTOR_OFFSET))(this);
	}

	::Class_1_E990AB1287569416* Method_1_9256BEBF50440FAD(::RPG::Client::PipelineCameraEngine* a1, ::Class_1_CDAD1C4D78702C93* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::Class_1_E990AB1287569416*(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::Class_1_CDAD1C4D78702C93*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_METHOD_1_9256BEBF50440FAD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_21F3349673FA5F72(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_METHOD_1_21F3349673FA5F72_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_04F4C631209B725F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_METHOD_1_04F4C631209B725F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFCA5A46486740D7(::RPG::Client::PipelineCameraEngine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_METHOD_1_DFCA5A46486740D7_OFFSET))(this, a1);
	}

	::Class_1_E990AB1287569416* Method_1_D7862DDFEBFBA0AF()
	{
		return ((::Class_1_E990AB1287569416*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_METHOD_1_D7862DDFEBFBA0AF_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0A6A60765B387C_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}
};
