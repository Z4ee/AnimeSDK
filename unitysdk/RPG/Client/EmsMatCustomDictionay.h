#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A179FA0)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1A179EB0)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x1A179F00)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_METHOD_1_EE995D7DF270EB55_OFFSET UNITYSDK_OFFSET(0x1A179D70)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A179D10)

namespace RPG::Client
{
	inline static constexpr unsigned int EmsMatCustomDictionay_TypeDefinitionIndex = 70704;

	class EmsMatCustomDictionay : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* keys; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* EmsMat; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EE995D7DF270EB55(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_METHOD_1_EE995D7DF270EB55_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_METHOD_1_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Void Method_1_CFE6FB160FFF5938()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_FINALIZE_OFFSET))(this);
		}
	};
}
