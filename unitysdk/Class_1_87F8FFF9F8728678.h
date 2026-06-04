#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_87F8FFF9F8728678_CLEAR_OFFSET UNITYSDK_OFFSET(0xAB337C0)
#define CLASS_1_87F8FFF9F8728678_METHOD_1_254A5C79D2532094_OFFSET UNITYSDK_OFFSET(0xAB33800)
#define CLASS_1_87F8FFF9F8728678_METHOD_1_2E55362BE3467FD1_OFFSET UNITYSDK_OFFSET(0xAB340B0)
#define CLASS_1_87F8FFF9F8728678_METHOD_1_32A3DC7816419BBC_OFFSET UNITYSDK_OFFSET(0xAB33B60)
#define CLASS_1_87F8FFF9F8728678_METHOD_1_7FEF1DB0A76A6F4E_OFFSET UNITYSDK_OFFSET(0xAB33C60)
#define CLASS_1_87F8FFF9F8728678_METHOD_1_B1203FFB9DD61890_OFFSET UNITYSDK_OFFSET(0xAB33ED0)
#define CLASS_1_87F8FFF9F8728678__CTOR_OFFSET UNITYSDK_OFFSET(0xAB348B0)

inline static constexpr unsigned int Class_1_87F8FFF9F8728678_TypeDefinitionIndex = 70922;

class Class_1_87F8FFF9F8728678 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678_CLEAR_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::FixPoint>* Method_1_254A5C79D2532094(::System::UInt32 a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678_METHOD_1_254A5C79D2532094_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_32A3DC7816419BBC(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678_METHOD_1_32A3DC7816419BBC_OFFSET))(this, a1);
	}

	::System::String* Method_1_7FEF1DB0A76A6F4E(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678_METHOD_1_7FEF1DB0A76A6F4E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_B1203FFB9DD61890(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678_METHOD_1_B1203FFB9DD61890_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_2E55362BE3467FD1(::RPG::Client::TextID a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_87F8FFF9F8728678_METHOD_1_2E55362BE3467FD1_OFFSET))(this, a1, a2, a3);
	}
};
