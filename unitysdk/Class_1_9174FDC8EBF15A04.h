#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_2F8808448A4005C9;
class Class_1_9174FDC8EBF15A04_Class_1_005C8BE141584E9A;
class Class_1_E9FBEDB7841BA1E8;
namespace RPG::GameCore { class IdleLiveSpineAnimTriggerRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9174FDC8EBF15A04_METHOD_1_1738FE11B4451187_OFFSET UNITYSDK_OFFSET(0xBCFAE90)
#define CLASS_1_9174FDC8EBF15A04_METHOD_1_BD3B68AC3DE1E1AB_OFFSET UNITYSDK_OFFSET(0xBCFA680)
#define CLASS_1_9174FDC8EBF15A04_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBCFA640)
#define CLASS_1_9174FDC8EBF15A04__CTOR_OFFSET UNITYSDK_OFFSET(0xBCFA790)

inline static constexpr unsigned int Class_1_9174FDC8EBF15A04_TypeDefinitionIndex = 75095;

class Class_1_9174FDC8EBF15A04 : public ::System::Object
{
public:
	::System::String* HPGOIKJCKLF; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9174FDC8EBF15A04_Class_1_005C8BE141584E9A*>* ABIDONIKBFG; // 0x18
	::System::Single PFADDKKAOHI; // 0x20

	::System::Void _ctor(::System::Collections::Generic::IList_1<::Class_1_2F8808448A4005C9*>* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_2F8808448A4005C9*>*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	static ::Class_1_9174FDC8EBF15A04* Method_1_BD3B68AC3DE1E1AB(::RPG::GameCore::IdleLiveSpineAnimTriggerRow* a1)
	{
		return ((::Class_1_9174FDC8EBF15A04*(*)(::RPG::GameCore::IdleLiveSpineAnimTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_METHOD_1_BD3B68AC3DE1E1AB_OFFSET))(a1);
	}

	::Class_1_E9FBEDB7841BA1E8* Method_1_1738FE11B4451187()
	{
		return ((::Class_1_E9FBEDB7841BA1E8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_METHOD_1_1738FE11B4451187_OFFSET))(this);
	}
};
