#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AF67E01114A98070;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_BD9D3A343D6041AB_METHOD_1_1B21CE7B731F54D0_OFFSET UNITYSDK_OFFSET(0x15741010)
#define CLASS_1_BD9D3A343D6041AB_METHOD_1_92B5FD6A44B44CE7_OFFSET UNITYSDK_OFFSET(0x15740C40)
#define CLASS_1_BD9D3A343D6041AB_METHOD_1_9563B0AB249038F0_OFFSET UNITYSDK_OFFSET(0x157406A0)
#define CLASS_1_BD9D3A343D6041AB_METHOD_1_9820AF49F13793B7_OFFSET UNITYSDK_OFFSET(0x1573FBD0)
#define CLASS_1_BD9D3A343D6041AB_METHOD_1_A24575AAD1041350_OFFSET UNITYSDK_OFFSET(0x15740410)
#define CLASS_1_BD9D3A343D6041AB_METHOD_1_E98DB08DCD5AF414_OFFSET UNITYSDK_OFFSET(0x1573F630)
#define CLASS_1_BD9D3A343D6041AB__CTOR_OFFSET UNITYSDK_OFFSET(0x157413D0)

inline static constexpr unsigned int Class_1_BD9D3A343D6041AB_TypeDefinitionIndex = 64623;

class Class_1_BD9D3A343D6041AB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_E98DB08DCD5AF414(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB_METHOD_1_E98DB08DCD5AF414_OFFSET))(this, a1);
	}

	::System::Void Method_1_9563B0AB249038F0(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB_METHOD_1_9563B0AB249038F0_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_9820AF49F13793B7(::System::IO::BinaryWriter* a1, ::Class_1_AF67E01114A98070* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::Class_1_AF67E01114A98070*))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB_METHOD_1_9820AF49F13793B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_92B5FD6A44B44CE7(::System::IO::BinaryReader* a1, ::Class_1_AF67E01114A98070* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::Class_1_AF67E01114A98070*))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB_METHOD_1_92B5FD6A44B44CE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A24575AAD1041350(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB_METHOD_1_A24575AAD1041350_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B21CE7B731F54D0(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BD9D3A343D6041AB_METHOD_1_1B21CE7B731F54D0_OFFSET))(a1, a2);
	}
};
