#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E70BA5F62D4D16DE;
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_8A1B169B056DC41A_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x18F8B370)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x18F8B230)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18F8B400)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_6279B2A89754B8E7_OFFSET UNITYSDK_OFFSET(0x18F8B100)
#define CLASS_1_8A1B169B056DC41A__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8B4A0)

inline static constexpr unsigned int Class_1_8A1B169B056DC41A_TypeDefinitionIndex = 73631;

class Class_1_8A1B169B056DC41A : public ::System::Object
{
public:
	::RPG::Client::CrowdAnimator::CrowdPrototype* JHAHABGNPEM; // 0x10
	::UnityEngine::Mesh* APBJFDCLGOC; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E70BA5F62D4D16DE*>* OGBJANBPJJN; // 0x20
	::UnityEngine::Material* EJGNBFKFHGG; // 0x28
	::UnityEngine::Texture2D* PKKLHJOCJAB; // 0x30
	::UnityEngine::Material* DFJEIPBBFMN; // 0x38
	::System::Int32 ILKENAAKKLH; // 0x40
	::System::Int32 BJIOBCHFCAA; // 0x44
	::System::Int32 GAGJLNOBMFK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6279B2A89754B8E7(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::RPG::Client::CrowdAnimator::CrowdPrototype* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_6279B2A89754B8E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2943CB55423DBA35(::Class_1_E70BA5F62D4D16DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E70BA5F62D4D16DE*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_2943CB55423DBA35_OFFSET))(this, a1);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_E70BA5F62D4D16DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E70BA5F62D4D16DE*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
