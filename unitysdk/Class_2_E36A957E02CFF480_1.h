#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_E36A957E02CFF480_1_METHOD_2_4D5C5BE2767BC79B_OFFSET UNITYSDK_OFFSET(0x13BB64B0)
#define CLASS_2_E36A957E02CFF480_1_METHOD_2_9F23BCE8765E37BB_OFFSET UNITYSDK_OFFSET(0x13BB66A0)
#define CLASS_2_E36A957E02CFF480_1_METHOD_2_B980FEDFD5B85034_OFFSET UNITYSDK_OFFSET(0x13BB6C80)
#define CLASS_2_E36A957E02CFF480_1_METHOD_2_BC4B5FA440B832E4_OFFSET UNITYSDK_OFFSET(0x13BB6880)
#define CLASS_2_E36A957E02CFF480_1_START_OFFSET UNITYSDK_OFFSET(0x13BB6420)
#define CLASS_2_E36A957E02CFF480_1_STOP_OFFSET UNITYSDK_OFFSET(0x13BB6460)
#define CLASS_2_E36A957E02CFF480_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13BB7020)

inline static constexpr unsigned int Class_2_E36A957E02CFF480_1_TypeDefinitionIndex = 58710;

class Class_2_E36A957E02CFF480_1 : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1_STOP_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_4D5C5BE2767BC79B(::Struct_2_019938BC9C50B169_2& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1_METHOD_2_4D5C5BE2767BC79B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_9F23BCE8765E37BB(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1_METHOD_2_9F23BCE8765E37BB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_BC4B5FA440B832E4(::Struct_2_019938BC9C50B169_2& a1, ::Il2CppArray<::RPG::Client::RelicItemData*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Il2CppArray<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1_METHOD_2_BC4B5FA440B832E4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_2_B980FEDFD5B85034(::Struct_2_019938BC9C50B169_2& a1, ::Il2CppArray<::RPG::GameCore::RelicType>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Il2CppArray<::RPG::GameCore::RelicType>*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_1_METHOD_2_B980FEDFD5B85034_OFFSET))(this, a1, a2);
	}
};
