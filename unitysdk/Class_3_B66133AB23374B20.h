#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_ED3BCE58A5804B4B.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_B66133AB23374B20_METHOD_3_570771A36E1C0E30_OFFSET UNITYSDK_OFFSET(0x13E6B900)
#define CLASS_3_B66133AB23374B20_METHOD_3_866057E5772343C9_OFFSET UNITYSDK_OFFSET(0x13E6B7E0)
#define CLASS_3_B66133AB23374B20__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6B8B0)

inline static constexpr unsigned int Class_3_B66133AB23374B20_TypeDefinitionIndex = 82030;

class Class_3_B66133AB23374B20 : public ::Class_2_ED3BCE58A5804B4B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B66133AB23374B20__CTOR_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_3_866057E5772343C9(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_3_B66133AB23374B20_METHOD_3_866057E5772343C9_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_3_570771A36E1C0E30(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_3_B66133AB23374B20_METHOD_3_570771A36E1C0E30_OFFSET))(this, a1);
	}
};
