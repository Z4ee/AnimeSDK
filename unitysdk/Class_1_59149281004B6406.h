#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_216432E2D686659F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

class Class_3_9404F1B47CA0DB14;

#define CLASS_1_59149281004B6406_METHOD_1_479535BE2657BA33_OFFSET UNITYSDK_OFFSET(0xF7B93E0)
#define CLASS_1_59149281004B6406__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7B9360)

inline static constexpr unsigned int Class_1_59149281004B6406_TypeDefinitionIndex = 78325;

class Class_1_59149281004B6406 : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_2()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59149281004B6406_TypeDefinitionIndex)->GetStaticField(0xA880);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_1()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59149281004B6406_TypeDefinitionIndex)->GetStaticField(0xA888);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_3()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59149281004B6406_TypeDefinitionIndex)->GetStaticField(0xA890);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_0()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59149281004B6406_TypeDefinitionIndex)->GetStaticField(0xA898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59149281004B6406__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_479535BE2657BA33(::Class_3_9404F1B47CA0DB14* a1, ::Struct_2_216432E2D686659F& a2)
	{
		return ((::System::Boolean(*)(::Class_3_9404F1B47CA0DB14*, ::Struct_2_216432E2D686659F&))((::PBYTE)hIl2Cpp + CLASS_1_59149281004B6406_METHOD_1_479535BE2657BA33_OFFSET))(a1, a2);
	}
};
