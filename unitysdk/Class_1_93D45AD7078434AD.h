#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CSVRow; }
namespace System { class String; }
namespace System::IO { class TextWriter; }

#define CLASS_1_93D45AD7078434AD_METHOD_1_52532100435D591F_OFFSET UNITYSDK_OFFSET(0x1D345530)
#define CLASS_1_93D45AD7078434AD_METHOD_1_CE60B3C1AA4676C6_OFFSET UNITYSDK_OFFSET(0x1D3457B0)
#define CLASS_1_93D45AD7078434AD_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1D3457C0)
#define CLASS_1_93D45AD7078434AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3454B0)

inline static constexpr unsigned int Class_1_93D45AD7078434AD_TypeDefinitionIndex = 10807;

class Class_1_93D45AD7078434AD : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* LADKLBIOMNC; // 0x10
	::System::IO::TextWriter* IADACDFOAJC; // 0x18
	::RPG::GameCore::CSVRow* NAENFAMAPBD; // 0x20

	::System::Void _ctor(::System::IO::TextWriter* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_93D45AD7078434AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52532100435D591F(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_93D45AD7078434AD_METHOD_1_52532100435D591F_OFFSET))(this, a1);
	}

	::RPG::GameCore::CSVRow* Method_1_CE60B3C1AA4676C6()
	{
		return ((::RPG::GameCore::CSVRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D45AD7078434AD_METHOD_1_CE60B3C1AA4676C6_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D45AD7078434AD_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
