#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogTagDefine_DisableLogTag.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogTagDefine_LogTag; }

#define CLASS_1_A7FAF4F359B52A76__CCTOR_OFFSET UNITYSDK_OFFSET(0x12220590)

inline static constexpr unsigned int Class_1_A7FAF4F359B52A76_TypeDefinitionIndex = 58280;

class Class_1_A7FAF4F359B52A76 : public ::System::Object
{
public:
	static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag** StaticGet_Field_1_0()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7FAF4F359B52A76_TypeDefinitionIndex)->GetStaticField(0x4A8C0);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag* StaticGet_Field_1_1()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7FAF4F359B52A76_TypeDefinitionIndex)->GetStaticField(0x11950);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag* StaticGet_Field_1_2()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7FAF4F359B52A76_TypeDefinitionIndex)->GetStaticField(0x11951);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A7FAF4F359B52A76__CCTOR_OFFSET))();
	}
};
