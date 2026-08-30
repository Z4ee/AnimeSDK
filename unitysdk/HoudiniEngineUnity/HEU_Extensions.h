#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { template <typename T> class IEquivable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_APPROXIMATELYEQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B3E09C0)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_APPROXIMATELYEQUALS_OFFSET UNITYSDK_OFFSET(0x1B3E0970)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_ASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B3E09E0)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1B3E0A90)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_DECOMPOSETOPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3E0BC0)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_DECOMPOSETOROTATION_OFFSET UNITYSDK_OFFSET(0x1B3E0BE0)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_DECOMPOSETOSCALE_OFFSET UNITYSDK_OFFSET(0x1B3E0C50)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_SWAPXANDY_OFFSET UNITYSDK_OFFSET(0x1B3E0B50)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_SWAPXANDZ_OFFSET UNITYSDK_OFFSET(0x1B3E0B70)
#define HOUDINIENGINEUNITY_HEU_EXTENSIONS_SWAPYANDZ_OFFSET UNITYSDK_OFFSET(0x1B3E0BA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Extensions_TypeDefinitionIndex = 39326;

	class HEU_Extensions : public ::System::Object
	{
	public:
		static ::System::Boolean ApproximatelyEquals(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_APPROXIMATELYEQUALS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ApproximatelyEquals_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_APPROXIMATELYEQUALS_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* AsByteArray(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_ASBYTEARRAY_OFFSET))(a1);
		}

		static ::System::String* AsString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_ASSTRING_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 SwapXAndY(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_SWAPXANDY_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 SwapXAndZ(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_SWAPXANDZ_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 SwapYAndZ(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_SWAPYANDZ_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 DecomposeToPosition(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_DECOMPOSETOPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion DecomposeToRotation(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_DECOMPOSETOROTATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 DecomposeToScale(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EXTENSIONS_DECOMPOSETOSCALE_OFFSET))(a1);
		}
	};
}
