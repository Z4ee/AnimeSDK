#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FollowPointMapping; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_38FC456F3527EADC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118A7A80)
#define CLASS_1_38FC456F3527EADC_METHOD_1_93F01A45F24DFDB8_OFFSET UNITYSDK_OFFSET(0x118A79A0)
#define CLASS_1_38FC456F3527EADC_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x118A7810)
#define CLASS_1_38FC456F3527EADC_METHOD_1_CCC3561EF32613CB_OFFSET UNITYSDK_OFFSET(0x118A7910)
#define CLASS_1_38FC456F3527EADC_METHOD_1_CF654166A870DE25_OFFSET UNITYSDK_OFFSET(0x118A7880)
#define CLASS_1_38FC456F3527EADC__CTOR_OFFSET UNITYSDK_OFFSET(0x118A7AF0)

inline static constexpr unsigned int Class_1_38FC456F3527EADC_TypeDefinitionIndex = 55859;

class Class_1_38FC456F3527EADC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::FollowPointMapping*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38FC456F3527EADC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38FC456F3527EADC_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_CF654166A870DE25(::RPG::Client::FollowPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_38FC456F3527EADC_METHOD_1_CF654166A870DE25_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCC3561EF32613CB(::RPG::Client::FollowPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_38FC456F3527EADC_METHOD_1_CCC3561EF32613CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_93F01A45F24DFDB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38FC456F3527EADC_METHOD_1_93F01A45F24DFDB8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38FC456F3527EADC_DISPOSE_OFFSET))(this);
	}
};
