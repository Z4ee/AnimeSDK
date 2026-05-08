#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyObject.h"

namespace QWER { class COctStream; }
namespace QWER { class CPropertyModule; }
namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace QWER { class IOctData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Share
{
	inline static constexpr unsigned int CPolymorphsim_1_TypeDefinitionIndex = 16767;

	template <typename T>
	class CPolymorphsim_1 : public ::QWER::CPropertyObject
	{
	public:
		T m_oValue; // 0x0
		static ::System::Func_2<::System::UInt16, T>** StaticGet__CreateObject_k__BackingField()
		{
			return (::System::Func_2<::System::UInt16, T>**)Il2CppClass::FromTypeDefinitionIndex(CPolymorphsim_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
