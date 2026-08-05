#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }

#define FOUNDATION_ENDOFFRAMESERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBFD440)
#define FOUNDATION_ENDOFFRAMESERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFD480)
#define FOUNDATION_ENDOFFRAMESERVICE___C__INVOKESELFDETERMINEDCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FBFD490)

namespace Foundation
{
	inline static constexpr unsigned int EndOfFrameService___c_TypeDefinitionIndex = 8679;

	class EndOfFrameService___c : public ::System::Object
	{
	public:
		static ::Foundation::EndOfFrameService___c** StaticGet___9()
		{
			return (::Foundation::EndOfFrameService___c**)Il2CppClass::FromTypeDefinitionIndex(EndOfFrameService___c_TypeDefinitionIndex)->GetStaticField(0x75B0);
		}
		static ::System::Predicate_1<::System::Func_1<::System::Boolean>*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::System::Func_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(EndOfFrameService___c_TypeDefinitionIndex)->GetStaticField(0x75B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InvokeSelfDeterminedCallback_b__8_0(::System::Func_1<::System::Boolean>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE___C__INVOKESELFDETERMINEDCALLBACK_B__8_0_OFFSET))(this, callback);
		}
	};
}
