#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_EA24CE65EFFD7097_METHOD_2_67E543FA93D8FC1E_OFFSET UNITYSDK_OFFSET(0x1CCDEBB0)
#define CLASS_2_EA24CE65EFFD7097_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CCDEC70)
#define CLASS_2_EA24CE65EFFD7097_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x1CCDE760)
#define CLASS_2_EA24CE65EFFD7097__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDEBA0)

inline static constexpr unsigned int Class_2_EA24CE65EFFD7097_TypeDefinitionIndex = 88323;

class Class_2_EA24CE65EFFD7097 : public ::Class_1_EA257C4B28E4CC0D
{
public:
	// static const ::System::Single Field_2_4; // 0x0
	::Il2CppArray<::Struct_2_E614D3B245F96744_1>* Field_2_0; // 0x40
	::System::Single Field_2_2; // 0x48
	::System::Int32 Field_2_1; // 0x4C
	::System::Boolean Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA24CE65EFFD7097__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA24CE65EFFD7097_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_2_67E543FA93D8FC1E(::System::Single a1, ::Il2CppArray<::Struct_2_E614D3B245F96744_1>* a2, ::System::Boolean a3, ::Struct_2_E614D3B245F96744_1 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::Struct_2_E614D3B245F96744_1>*, ::System::Boolean, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_2_EA24CE65EFFD7097_METHOD_2_67E543FA93D8FC1E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA24CE65EFFD7097_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
