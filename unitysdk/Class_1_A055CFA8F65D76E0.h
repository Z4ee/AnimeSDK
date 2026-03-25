#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CSVRow; }
namespace System { class String; }
namespace System::IO { class TextWriter; }

#define CLASS_1_A055CFA8F65D76E0_METHOD_1_CE60B3C1AA4676C6_OFFSET UNITYSDK_OFFSET(0x17975910)
#define CLASS_1_A055CFA8F65D76E0_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17975920)
#define CLASS_1_A055CFA8F65D76E0_METHOD_1_E1320A10DC6A653B_OFFSET UNITYSDK_OFFSET(0x179757A0)
#define CLASS_1_A055CFA8F65D76E0__CTOR_OFFSET UNITYSDK_OFFSET(0x17975720)

inline static constexpr unsigned int Class_1_A055CFA8F65D76E0_TypeDefinitionIndex = 22569;

class Class_1_A055CFA8F65D76E0 : public ::System::Object
{
public:
	::System::IO::TextWriter* Field_1_0; // 0x10
	::Il2CppArray<::System::String*>* Field_1_2; // 0x18
	::RPG::GameCore::CSVRow* Field_1_1; // 0x20

	::System::Void _ctor(::System::IO::TextWriter* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A055CFA8F65D76E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1320A10DC6A653B(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A055CFA8F65D76E0_METHOD_1_E1320A10DC6A653B_OFFSET))(this, a1);
	}

	::RPG::GameCore::CSVRow* Method_1_CE60B3C1AA4676C6()
	{
		return ((::RPG::GameCore::CSVRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A055CFA8F65D76E0_METHOD_1_CE60B3C1AA4676C6_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A055CFA8F65D76E0_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
