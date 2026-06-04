#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_662;
class Class_1_11C13BB2EAE9D3D9;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_16A8D8B6914EDF43_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0xCEBB2F0)
#define CLASS_1_16A8D8B6914EDF43_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xCEBBAD0)
#define CLASS_1_16A8D8B6914EDF43_METHOD_1_AB88A6B5EA231AE0_1_OFFSET UNITYSDK_OFFSET(0xCEBB750)
#define CLASS_1_16A8D8B6914EDF43_METHOD_1_AB88A6B5EA231AE0_OFFSET UNITYSDK_OFFSET(0xCEBB3D0)
#define CLASS_1_16A8D8B6914EDF43_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCEBB380)
#define CLASS_1_16A8D8B6914EDF43__CTOR_OFFSET UNITYSDK_OFFSET(0xCEBB370)

inline static constexpr unsigned int Class_1_16A8D8B6914EDF43_TypeDefinitionIndex = 58357;

class Class_1_16A8D8B6914EDF43 : public ::System::Object
{
public:
	::Class_1_11C13BB2EAE9D3D9* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A8D8B6914EDF43__CTOR_OFFSET))(this);
	}

	static ::Class_1_16A8D8B6914EDF43* Method_1_250203490119AF47(::Class_1_11C13BB2EAE9D3D9* a1)
	{
		return ((::Class_1_16A8D8B6914EDF43*(*)(::Class_1_11C13BB2EAE9D3D9*))((::PBYTE)hIl2Cpp + CLASS_1_16A8D8B6914EDF43_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_662* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_662*))((::PBYTE)hIl2Cpp + CLASS_1_16A8D8B6914EDF43_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB88A6B5EA231AE0(::Class_0_16E4307DCC419505_662* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_662*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_16A8D8B6914EDF43_METHOD_1_AB88A6B5EA231AE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AB88A6B5EA231AE0_1(::Class_0_16E4307DCC419505_662* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_662*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_16A8D8B6914EDF43_METHOD_1_AB88A6B5EA231AE0_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A8D8B6914EDF43_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}
};
