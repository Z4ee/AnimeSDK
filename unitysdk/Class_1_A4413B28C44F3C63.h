#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_A4413B28C44F3C63_METHOD_1_534A6BFC297ED668_OFFSET UNITYSDK_OFFSET(0x17DFB680)
#define CLASS_1_A4413B28C44F3C63_METHOD_1_BB1BC3ED1C761DAF_OFFSET UNITYSDK_OFFSET(0x17DFBD30)

inline static constexpr unsigned int Class_1_A4413B28C44F3C63_TypeDefinitionIndex = 53129;

class Class_1_A4413B28C44F3C63 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_BB1BC3ED1C761DAF(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::RPG::GameCore::DynamicString* a3, ::System::Boolean a4, ::RPG::GameCore::DynamicString* a5, ::System::UInt32& a6, ::System::UInt32& a7, ::System::UInt32& a8)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::RPG::GameCore::DynamicString*, ::System::Boolean, ::RPG::GameCore::DynamicString*, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_A4413B28C44F3C63_METHOD_1_BB1BC3ED1C761DAF_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_534A6BFC297ED668(::System::Object* a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4413B28C44F3C63_METHOD_1_534A6BFC297ED668_OFFSET))(a1, a2, a3, a4, a5);
	}
};
