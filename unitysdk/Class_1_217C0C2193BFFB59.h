#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_217C0C2193BFFB59_CLEAR_OFFSET UNITYSDK_OFFSET(0x1508B200)
#define CLASS_1_217C0C2193BFFB59_METHOD_1_13400180AA849855_OFFSET UNITYSDK_OFFSET(0x1508B6A0)
#define CLASS_1_217C0C2193BFFB59_METHOD_1_254A5C79D2532094_OFFSET UNITYSDK_OFFSET(0x1508B240)
#define CLASS_1_217C0C2193BFFB59_METHOD_1_32A3DC7816419BBC_OFFSET UNITYSDK_OFFSET(0x1508B5A0)
#define CLASS_1_217C0C2193BFFB59_METHOD_1_8131CE0B7175A4D7_OFFSET UNITYSDK_OFFSET(0x1508B900)
#define CLASS_1_217C0C2193BFFB59_METHOD_1_B6777504BB5C0764_OFFSET UNITYSDK_OFFSET(0x1508BAD0)
#define CLASS_1_217C0C2193BFFB59__CTOR_OFFSET UNITYSDK_OFFSET(0x1508C600)

inline static constexpr unsigned int Class_1_217C0C2193BFFB59_TypeDefinitionIndex = 72435;

class Class_1_217C0C2193BFFB59 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59_CLEAR_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::FixPoint>* Method_1_254A5C79D2532094(::System::UInt32 a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59_METHOD_1_254A5C79D2532094_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_32A3DC7816419BBC(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59_METHOD_1_32A3DC7816419BBC_OFFSET))(this, a1);
	}

	::System::String* Method_1_13400180AA849855(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59_METHOD_1_13400180AA849855_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_8131CE0B7175A4D7(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59_METHOD_1_8131CE0B7175A4D7_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_B6777504BB5C0764(::RPG::Client::TextID a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_217C0C2193BFFB59_METHOD_1_B6777504BB5C0764_OFFSET))(this, a1, a2, a3);
	}
};
