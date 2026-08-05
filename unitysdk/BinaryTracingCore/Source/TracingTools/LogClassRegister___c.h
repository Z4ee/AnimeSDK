#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class ISerializableObject; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F650D70)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F650DB0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F650DC0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C___CCTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1F650E70)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogClassRegister___c_TypeDefinitionIndex = 34588;

	class LogClassRegister___c : public ::System::Object
	{
	public:
		static ::BinaryTracingCore::Source::TracingTools::LogClassRegister___c** StaticGet___9()
		{
			return (::BinaryTracingCore::Source::TracingTools::LogClassRegister___c**)Il2CppClass::FromTypeDefinitionIndex(LogClassRegister___c_TypeDefinitionIndex)->GetStaticField(0x28EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C__CTOR_OFFSET))(this);
		}

		::BinaryTracingFramework::Serialize::ISerializableObject* __cctor_b__0_0(::System::Int32 version)
		{
			return ((::BinaryTracingFramework::Serialize::ISerializableObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C___CCTOR_B__0_0_OFFSET))(this, version);
		}

		::BinaryTracingFramework::Serialize::ISerializableObject* __cctor_b__0_1(::System::Int32 version)
		{
			return ((::BinaryTracingFramework::Serialize::ISerializableObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER___C___CCTOR_B__0_1_OFFSET))(this, version);
		}
	};
}
