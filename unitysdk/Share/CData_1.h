#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class COctStream; }
namespace QWER { class IOctData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Share
{
	inline static constexpr unsigned int CData_1_TypeDefinitionIndex = 16871;

	template <typename T>
	class CData_1 : public ::System::Object
	{
	public:
		T m_oValue; // 0x0
		static ::System::Func_2<::System::UInt16, T>** StaticGet__CreateObject_k__BackingField()
		{
			return (::System::Func_2<::System::UInt16, T>**)Il2CppClass::FromTypeDefinitionIndex(CData_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
