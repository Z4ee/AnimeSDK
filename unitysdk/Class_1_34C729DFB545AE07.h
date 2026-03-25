#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_991;
class Class_1_43BD383C98B4C0C5_171;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_34C729DFB545AE07_GET__CONTEXTGETTER_OFFSET UNITYSDK_OFFSET(0x116FA460)
#define CLASS_1_34C729DFB545AE07_GET__SERVICES_OFFSET UNITYSDK_OFFSET(0x116FA430)
#define CLASS_1_34C729DFB545AE07_METHOD_1_22311B94D2193FD6_OFFSET UNITYSDK_OFFSET(0x116FA4D0)
#define CLASS_1_34C729DFB545AE07_METHOD_1_2DB334CAD65A86FB_OFFSET UNITYSDK_OFFSET(0x116FA470)
#define CLASS_1_34C729DFB545AE07_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x116FA440)
#define CLASS_1_34C729DFB545AE07_METHOD_1_B43F3F06A2D37134_1_OFFSET UNITYSDK_OFFSET(0x116FB040)
#define CLASS_1_34C729DFB545AE07_METHOD_1_B43F3F06A2D37134_OFFSET UNITYSDK_OFFSET(0x116FAEE0)
#define CLASS_1_34C729DFB545AE07_METHOD_1_C8E452094B261DF3_OFFSET UNITYSDK_OFFSET(0x116FA9F0)
#define CLASS_1_34C729DFB545AE07_METHOD_1_E2AE45E074CE551F_OFFSET UNITYSDK_OFFSET(0x116FB1A0)
#define CLASS_1_34C729DFB545AE07__CTOR_OFFSET UNITYSDK_OFFSET(0x116FA4C0)

inline static constexpr unsigned int Class_1_34C729DFB545AE07_TypeDefinitionIndex = 63112;

class Class_1_34C729DFB545AE07 : public ::System::Object
{
public:
	::Class_3_D637C1E17FCBBFB0* __Services_k__BackingField; // 0x10
	::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>* __ContextGetter_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_991*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_D637C1E17FCBBFB0* a1, ::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*, ::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_D637C1E17FCBBFB0* get__Services()
	{
		return ((::Class_3_D637C1E17FCBBFB0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_GET__SERVICES_OFFSET))(this);
	}

	::Class_1_C4FD36003027AC99* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_C4FD36003027AC99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>* get__ContextGetter()
	{
		return ((::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_GET__CONTEXTGETTER_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_171* Method_1_2DB334CAD65A86FB()
	{
		return ((::Class_1_43BD383C98B4C0C5_171*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_2DB334CAD65A86FB_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_22311B94D2193FD6(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_22311B94D2193FD6_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_1_B43F3F06A2D37134()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_B43F3F06A2D37134_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* Method_1_B43F3F06A2D37134_1()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_B43F3F06A2D37134_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_E2AE45E074CE551F(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_E2AE45E074CE551F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_991* Method_1_C8E452094B261DF3(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_991*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_C8E452094B261DF3_OFFSET))(this, a1);
	}
};
