#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1539;
class Class_1_44340B2393166A74;
class Class_1_872D17A60BBE5EB3;
class Class_1_D17272E82AE804C2_699;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7B5BC5F7531D3B01_2_METHOD_1_FADB8E8B7E5A86E9_OFFSET UNITYSDK_OFFSET(0xB2D3BE0)
#define CLASS_1_7B5BC5F7531D3B01_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D3BD0)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_2_TypeDefinitionIndex = 80243;

class Class_1_7B5BC5F7531D3B01_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1539* MJHHLOPFDNK; // 0x10
	::Class_1_872D17A60BBE5EB3* DOIMIHLLDGH; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1539* a1, ::Class_1_872D17A60BBE5EB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1539*, ::Class_1_872D17A60BBE5EB3*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_699*>* Method_1_FADB8E8B7E5A86E9(::Class_1_44340B2393166A74* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_44340B2393166A74*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_699*>*(*)(::PVOID, ::Class_1_44340B2393166A74*, ::System::Collections::Generic::IEnumerable_1<::Class_1_44340B2393166A74*>*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_2_METHOD_1_FADB8E8B7E5A86E9_OFFSET))(this, a1, a2);
	}
};
