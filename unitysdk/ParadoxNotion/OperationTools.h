#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define PARADOXNOTION_OPERATIONTOOLS_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1BCCE2F0)
#define PARADOXNOTION_OPERATIONTOOLS_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BCCD110)
#define PARADOXNOTION_OPERATIONTOOLS_GETCOMPARESTRING_OFFSET UNITYSDK_OFFSET(0x1BCCCAE0)
#define PARADOXNOTION_OPERATIONTOOLS_GETOPERATIONSTRING_OFFSET UNITYSDK_OFFSET(0x1BCCC430)
#define PARADOXNOTION_OPERATIONTOOLS_OPERATE_1_OFFSET UNITYSDK_OFFSET(0x1BCCC550)
#define PARADOXNOTION_OPERATIONTOOLS_OPERATE_2_OFFSET UNITYSDK_OFFSET(0x1BCCEF40)
#define PARADOXNOTION_OPERATIONTOOLS_OPERATE_OFFSET UNITYSDK_OFFSET(0x1BCCEEE0)

namespace ParadoxNotion
{
	inline static constexpr unsigned int OperationTools_TypeDefinitionIndex = 29593;

	class OperationTools : public ::System::Object
	{
	public:
		static ::System::String* GetOperationString(::ParadoxNotion::OperationMethod om)
		{
			return ((::System::String*(*)(::ParadoxNotion::OperationMethod))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_GETOPERATIONSTRING_OFFSET))(om);
		}

		static ::System::Single Operate(::System::Single a, ::System::Single b, ::ParadoxNotion::OperationMethod om, ::System::Single delta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::ParadoxNotion::OperationMethod, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_OPERATE_OFFSET))(a, b, om, delta);
		}

		static ::System::Int32 Operate_1(::System::Int32 a, ::System::Int32 b, ::ParadoxNotion::OperationMethod om)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::ParadoxNotion::OperationMethod))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_OPERATE_1_OFFSET))(a, b, om);
		}

		static ::UnityEngine::Vector3 Operate_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::ParadoxNotion::OperationMethod om, ::System::Single delta)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ParadoxNotion::OperationMethod, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_OPERATE_2_OFFSET))(a, b, om, delta);
		}

		static ::System::String* GetCompareString(::ParadoxNotion::CompareMethod cm)
		{
			return ((::System::String*(*)(::ParadoxNotion::CompareMethod))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_GETCOMPARESTRING_OFFSET))(cm);
		}

		static ::System::Boolean Compare(::System::Single a, ::System::Single b, ::ParadoxNotion::CompareMethod cm, ::System::Single floatingPoint)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::ParadoxNotion::CompareMethod, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_COMPARE_OFFSET))(a, b, cm, floatingPoint);
		}

		static ::System::Boolean Compare_1(::System::Int32 a, ::System::Int32 b, ::ParadoxNotion::CompareMethod cm)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::ParadoxNotion::CompareMethod))((::PBYTE)hIl2Cpp + PARADOXNOTION_OPERATIONTOOLS_COMPARE_1_OFFSET))(a, b, cm);
		}
	};
}
