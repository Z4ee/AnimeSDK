#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_554535650EEC6F9F;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_D108A29A60CF7066_METHOD_1_117B99693C4485BB_OFFSET UNITYSDK_OFFSET(0x136C21E0)
#define CLASS_1_D108A29A60CF7066_METHOD_1_17A8188F008F05D9_OFFSET UNITYSDK_OFFSET(0x136C2C30)
#define CLASS_1_D108A29A60CF7066_METHOD_1_22D166F9D5FBB9C9_OFFSET UNITYSDK_OFFSET(0x136C2550)
#define CLASS_1_D108A29A60CF7066_METHOD_1_820775ED51E6F382_OFFSET UNITYSDK_OFFSET(0x136C2A90)
#define CLASS_1_D108A29A60CF7066_METHOD_1_9ED220D8C8498D7C_OFFSET UNITYSDK_OFFSET(0x136C3330)
#define CLASS_1_D108A29A60CF7066_METHOD_1_E5747B395DFF526C_OFFSET UNITYSDK_OFFSET(0x136C3180)
#define CLASS_1_D108A29A60CF7066__CTOR_OFFSET UNITYSDK_OFFSET(0x136C3560)

inline static constexpr unsigned int Class_1_D108A29A60CF7066_TypeDefinitionIndex = 60408;

class Class_1_D108A29A60CF7066 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_117B99693C4485BB(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_117B99693C4485BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_17A8188F008F05D9(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_17A8188F008F05D9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_22D166F9D5FBB9C9(::System::IO::BinaryWriter* a1, ::Class_1_554535650EEC6F9F* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::Class_1_554535650EEC6F9F*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_22D166F9D5FBB9C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E5747B395DFF526C(::System::IO::BinaryReader* a1, ::Class_1_554535650EEC6F9F* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::Class_1_554535650EEC6F9F*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_E5747B395DFF526C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_820775ED51E6F382(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_820775ED51E6F382_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9ED220D8C8498D7C(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_9ED220D8C8498D7C_OFFSET))(a1, a2);
	}
};
