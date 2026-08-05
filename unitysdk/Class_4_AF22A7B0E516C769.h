#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_AF22A7B0E516C769_METHOD_4_40742BB292FA4709_OFFSET UNITYSDK_OFFSET(0x174D1140)
#define CLASS_4_AF22A7B0E516C769_METHOD_4_5F46021E94D53F0C_OFFSET UNITYSDK_OFFSET(0x174D1A00)
#define CLASS_4_AF22A7B0E516C769_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x174D19F0)
#define CLASS_4_AF22A7B0E516C769_METHOD_4_917CFF8A8C98D17B_OFFSET UNITYSDK_OFFSET(0x174D1250)
#define CLASS_4_AF22A7B0E516C769_METHOD_4_E419BD896E68A583_OFFSET UNITYSDK_OFFSET(0x174D1620)
#define CLASS_4_AF22A7B0E516C769_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x174D0F80)
#define CLASS_4_AF22A7B0E516C769__CTOR_OFFSET UNITYSDK_OFFSET(0x174D1020)

inline static constexpr unsigned int Class_4_AF22A7B0E516C769_TypeDefinitionIndex = 66821;

class Class_4_AF22A7B0E516C769 : public ::Class_3_627DF5C40DDAA45B<::Class_4_AF22A7B0E516C769*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_4_40742BB292FA4709(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769_METHOD_4_40742BB292FA4709_OFFSET))(this, a1);
	}

	::System::Void Method_4_E419BD896E68A583(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769_METHOD_4_E419BD896E68A583_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_5F46021E94D53F0C(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769_METHOD_4_5F46021E94D53F0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_917CFF8A8C98D17B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_4_AF22A7B0E516C769_METHOD_4_917CFF8A8C98D17B_OFFSET))(this, a1);
	}
};
