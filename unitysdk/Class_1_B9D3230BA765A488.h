#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1747DAB17F36B4DF;
namespace UnityEngine { class Transform; }

#define CLASS_1_B9D3230BA765A488_INIT_OFFSET UNITYSDK_OFFSET(0x14E12BF0)
#define CLASS_1_B9D3230BA765A488_METHOD_1_E1005455DB785023_OFFSET UNITYSDK_OFFSET(0x14E12C60)
#define CLASS_1_B9D3230BA765A488_ONSYNC_OFFSET UNITYSDK_OFFSET(0x14E12420)
#define CLASS_1_B9D3230BA765A488_POLISH_OFFSET UNITYSDK_OFFSET(0x14E12AF0)
#define CLASS_1_B9D3230BA765A488_RECYCLE_OFFSET UNITYSDK_OFFSET(0x14E12B50)
#define CLASS_1_B9D3230BA765A488__CTOR_OFFSET UNITYSDK_OFFSET(0x14E12C50)

inline static constexpr unsigned int Class_1_B9D3230BA765A488_TypeDefinitionIndex = 81565;

class Class_1_B9D3230BA765A488 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D3230BA765A488__CTOR_OFFSET))(this);
	}

	::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B9D3230BA765A488_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D3230BA765A488_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D3230BA765A488_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_1_B9D3230BA765A488_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_B9D3230BA765A488* Method_1_E1005455DB785023(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_B9D3230BA765A488*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B9D3230BA765A488_METHOD_1_E1005455DB785023_OFFSET))(a1, a2);
	}
};
