#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_518;

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_327_Class_1_F7A8926FBAFC2551_TypeDefinitionIndex = 76322;

template <typename TPose, typename TContextIn, typename TContextOut>
class Class_1_534AF681CC2BD5FD_327_Class_1_F7A8926FBAFC2551 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_518<TPose, TContextIn>* Field_1_0; // 0x0
	::Class_0_16E4307DCC419505_518<TPose, TContextOut>* Field_1_1; // 0x0
	::System::Func_2<TContextIn, TContextOut>* Field_1_2; // 0x0
};
