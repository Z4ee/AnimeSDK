#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_44CAFB3A09178D38_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1848DFA0)
#define CLASS_2_44CAFB3A09178D38_2_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x1848DF30)
#define CLASS_2_44CAFB3A09178D38_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1848E000)
#define CLASS_2_44CAFB3A09178D38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1848E080)

inline static constexpr unsigned int Class_2_44CAFB3A09178D38_2_TypeDefinitionIndex = 65928;

class Class_2_44CAFB3A09178D38_2 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 LPEHHMHPCMG; // 0x20
	::System::Int32 ONOPKOLOABG; // 0x24
	::System::Int32 LJBOIIKBIDO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_2__CTOR_OFFSET))(this);
	}

	static ::Class_2_44CAFB3A09178D38_2* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_44CAFB3A09178D38_2*(*)())((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_2_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_2_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_2_ONEXECUTE_OFFSET))(this);
	}
};
