#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MATCUSTOMDICTIONAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA81B0A0)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA81B000)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_METHOD_1_4DB5506DCD053FB2_OFFSET UNITYSDK_OFFSET(0xA81AF20)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA81AFB0)
#define RPG_CLIENT_MATCUSTOMDICTIONAY__CTOR_OFFSET UNITYSDK_OFFSET(0xA81AEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatCustomDictionay_TypeDefinitionIndex = 65235;

	class MatCustomDictionay : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* keys; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* values; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4DB5506DCD053FB2(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_METHOD_1_4DB5506DCD053FB2_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_METHOD_1_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_FINALIZE_OFFSET))(this);
		}
	};
}
